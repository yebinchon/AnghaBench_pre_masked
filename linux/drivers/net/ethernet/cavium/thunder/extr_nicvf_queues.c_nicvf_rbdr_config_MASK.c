
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rbdr_cfg {int ena; int lines; scalar_t__ avg_con; int qsize; scalar_t__ ldwb; scalar_t__ reset; } ;
struct TYPE_2__ {scalar_t__ phys_base; } ;
struct rbdr {int dma_size; scalar_t__ thresh; TYPE_1__ dmem; } ;
struct queue_set {scalar_t__ rbdr_len; struct rbdr* rbdr; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rbdr_cfg*,int ,int) ;
 int FUNC_1 (struct nicvf*,int ,int,scalar_t__) ;
 int FUNC_2 (struct nicvf*,struct rbdr*,int) ;

__attribute__((used)) static void FUNC_3(struct nicvf *VAR_5, struct queue_set *VAR_6,
         int VAR_7, bool VAR_8)
{
 struct rbdr *VAR_9;
 struct rbdr_cfg VAR_10;

 VAR_9 = &VAR_6->rbdr[VAR_7];
 FUNC_2(VAR_5, VAR_9, VAR_7);
 if (!VAR_8)
  return;


 FUNC_1(VAR_5, VAR_0,
         VAR_7, (u64)(VAR_9->dmem.phys_base));



 FUNC_0(&VAR_10, 0, sizeof(struct rbdr_cfg));
 VAR_10.ena = 1;
 VAR_10.reset = 0;
 VAR_10.ldwb = 0;
 VAR_10.qsize = VAR_4;
 VAR_10.avg_con = 0;
 VAR_10.lines = VAR_9->dma_size / 128;
 FUNC_1(VAR_5, VAR_1,
         VAR_7, *(u64 *)&VAR_10);


 FUNC_1(VAR_5, VAR_2,
         VAR_7, VAR_6->rbdr_len - 1);


 FUNC_1(VAR_5, VAR_3,
         VAR_7, VAR_9->thresh - 1);
}
