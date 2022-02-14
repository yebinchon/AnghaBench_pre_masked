
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_wq {int wqebb_size; } ;
struct hinic_sq {struct hinic_wq* wq; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct hinic_sq*,int) ;
 int FUNC_2 (struct hinic_sq*,int,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct hinic_sq *VAR_0, u16 VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 struct hinic_wq *VAR_4 = VAR_0->wq;


 VAR_1 += FUNC_0(VAR_2, VAR_4->wqebb_size) / VAR_4->wqebb_size;

 FUNC_3();

 FUNC_4(FUNC_2(VAR_0, VAR_1, VAR_3), FUNC_1(VAR_0, VAR_1));
}
