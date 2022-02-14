
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct int_ch_state {unsigned int level; int idx1; } ;
struct dim_channel {scalar_t__ packet_length; scalar_t__ bytes_per_frame; scalar_t__ addr; struct int_ch_state state; } ;
struct TYPE_3__ {scalar_t__ ch_addr; } ;
struct TYPE_4__ {TYPE_1__ atx_dbr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,int ,int ) ;
 int FUNC_2 (scalar_t__,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_7(struct dim_channel *VAR_3, u32 VAR_4, u16 VAR_5)
{
 struct int_ch_state *const VAR_6 = &VAR_3->state;

 if (VAR_5 <= 0)
  return FUNC_4(VAR_0, "Bad buffer size");

 if (VAR_3->packet_length == 0 && VAR_3->bytes_per_frame == 0 &&
     VAR_5 != FUNC_3(VAR_5))
  return FUNC_4(VAR_0,
        "Bad control/async buffer size");

 if (VAR_3->packet_length &&
     VAR_5 != FUNC_5(VAR_5, VAR_3->packet_length))
  return FUNC_4(VAR_0,
        "Bad isochronous buffer size");

 if (VAR_3->bytes_per_frame &&
     VAR_5 != FUNC_6(VAR_5, VAR_3->bytes_per_frame))
  return FUNC_4(VAR_0,
        "Bad synchronous buffer size");

 if (VAR_6->level >= 2u)
  return FUNC_4(VAR_1, "Channel overflow");

 ++VAR_6->level;

 if (VAR_3->addr == VAR_2.atx_dbr.ch_addr)
  FUNC_0(VAR_5);

 if (VAR_3->packet_length || VAR_3->bytes_per_frame)
  FUNC_2(VAR_3->addr, VAR_6->idx1, VAR_4, VAR_5);
 else
  FUNC_1(VAR_3->addr, VAR_6->idx1, VAR_4,
          VAR_5);
 VAR_6->idx1 ^= 1;

 return 1;
}
