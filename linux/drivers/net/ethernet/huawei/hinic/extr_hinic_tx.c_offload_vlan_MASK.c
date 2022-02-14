
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef unsigned int u16 ;
struct hinic_sq_task {int pkt_info0; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct hinic_sq_task *VAR_3, u32 *VAR_4,
    u16 VAR_5, u16 VAR_6)
{
 VAR_3->pkt_info0 |= FUNC_1(VAR_5, VAR_2) |
    FUNC_1(1U, VAR_1);

 *VAR_4 |= FUNC_0(VAR_6, VAR_0);
}
