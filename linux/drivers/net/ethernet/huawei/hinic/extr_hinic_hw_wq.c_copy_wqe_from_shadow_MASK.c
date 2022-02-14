
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_wq {int wqebb_size; } ;


 int FUNC_0 (struct hinic_wq*,int ) ;
 int FUNC_1 (struct hinic_wq*,int ) ;
 void* FUNC_2 (struct hinic_wq*,int ) ;
 int FUNC_3 (void*,void*,int ) ;

__attribute__((used)) static void FUNC_4(struct hinic_wq *VAR_0, void *VAR_1,
     int VAR_2, u16 VAR_3)
{
 void *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_3++) {
  VAR_3 = FUNC_0(VAR_0, VAR_3);
  VAR_4 = FUNC_2(VAR_0, VAR_3) +
        FUNC_1(VAR_0, VAR_3);

  FUNC_3(VAR_4, VAR_1, VAR_0->wqebb_size);
  VAR_1 += VAR_0->wqebb_size;
 }
}
