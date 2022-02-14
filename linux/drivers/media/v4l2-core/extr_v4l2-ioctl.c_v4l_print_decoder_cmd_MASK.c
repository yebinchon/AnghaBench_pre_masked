
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pts; } ;
struct TYPE_3__ {int format; int speed; } ;
struct v4l2_decoder_cmd {scalar_t__ cmd; TYPE_2__ stop; TYPE_1__ start; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void FUNC_2(const void *VAR_2, bool VAR_3)
{
 const struct v4l2_decoder_cmd *VAR_4 = VAR_2;

 FUNC_0("cmd=%d, flags=0x%x\n", VAR_4->cmd, VAR_4->flags);

 if (VAR_4->cmd == VAR_0)
  FUNC_1("speed=%d, format=%u\n",
    VAR_4->start.speed, VAR_4->start.format);
 else if (VAR_4->cmd == VAR_1)
  FUNC_1("pts=%llu\n", VAR_4->stop.pts);
}
