
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct rio_channel {scalar_t__ state; int comp; void* rem_channel; } ;
struct rio_ch_chan_hdr {int src_ch; int dst_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct rio_channel*,int ) ;
 struct rio_channel* FUNC_3 (void*) ;
 int FUNC_4 (struct rio_channel*) ;

__attribute__((used)) static int FUNC_5(void *VAR_4)
{
 struct rio_channel *VAR_5;
 struct rio_ch_chan_hdr *VAR_6 = VAR_4;
 u16 VAR_7;

 VAR_7 = FUNC_1(VAR_6->dst_ch);
 VAR_5 = FUNC_3(VAR_7);
 if (!VAR_5)
  return -VAR_1;

 if (VAR_5->state != VAR_2) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 FUNC_2(VAR_5, VAR_3);
 VAR_5->rem_channel = FUNC_1(VAR_6->src_ch);
 FUNC_0(&VAR_5->comp);
 FUNC_4(VAR_5);

 return 0;
}
