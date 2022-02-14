
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_unlink {int list; void* status; void* seqnum; } ;
struct stub_device {int unlink_tx; int ud; } ;
typedef void* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct stub_unlink* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct stub_device *VAR_2, __u32 VAR_3,
        __u32 VAR_4)
{
 struct stub_unlink *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct stub_unlink), VAR_0);
 if (!VAR_5) {
  FUNC_2(&VAR_2->ud, VAR_1);
  return;
 }

 VAR_5->seqnum = VAR_3;
 VAR_5->status = VAR_4;

 FUNC_1(&VAR_5->list, &VAR_2->unlink_tx);
}
