
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ulong ;
struct visorchannel {scalar_t__ nbytes; char* mapped; int chan_hdr; } ;
struct channel_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;

int FUNC_2(struct visorchannel *VAR_1, ulong VAR_2, void *VAR_3,
         ulong VAR_4)
{
 size_t VAR_5 = sizeof(struct channel_header);
 size_t VAR_6;

 if (VAR_2 + VAR_4 > VAR_1->nbytes)
  return -VAR_0;

 if (VAR_2 < VAR_5) {
  VAR_6 = FUNC_1(VAR_5 - VAR_2, VAR_4);
  FUNC_0(((char *)(&VAR_1->chan_hdr)) + VAR_2,
         VAR_3, VAR_6);
 }
 FUNC_0(VAR_1->mapped + VAR_2, VAR_3, VAR_4);
 return 0;
}
