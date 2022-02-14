
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {unsigned long long queue_count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hisi_hba*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_2)
{
 FUNC_1(VAR_2, VAR_0,
    (u32)((1ULL << VAR_2->queue_count) - 1));

 FUNC_0(VAR_1, &VAR_2->flags);
}
