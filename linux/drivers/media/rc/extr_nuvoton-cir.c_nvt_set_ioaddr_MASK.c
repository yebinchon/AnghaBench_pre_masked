
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvt_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct nvt_dev*,int ) ;
 int FUNC_1 (struct nvt_dev*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct nvt_dev *VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0) << 8;
 VAR_4 |= FUNC_0(VAR_2, VAR_1);

 if (VAR_4)
  *VAR_3 = VAR_4;
 else {
  FUNC_1(VAR_2, *VAR_3 >> 8, VAR_0);
  FUNC_1(VAR_2, *VAR_3 & 0xff, VAR_1);
 }
}
