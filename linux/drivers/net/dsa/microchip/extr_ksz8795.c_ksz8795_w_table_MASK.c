
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ksz_device {int alu_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ksz_device*,int ,int) ;
 int FUNC_2 (struct ksz_device*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ksz_device *VAR_2, int VAR_3, u16 VAR_4,
       u64 VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_3) | VAR_4;

 FUNC_3(&VAR_2->alu_mutex);
 FUNC_2(VAR_2, VAR_1, VAR_5);
 FUNC_1(VAR_2, VAR_0, VAR_6);
 FUNC_4(&VAR_2->alu_mutex);
}
