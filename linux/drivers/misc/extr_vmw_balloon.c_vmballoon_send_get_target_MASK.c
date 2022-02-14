
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vmballoon {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 (struct vmballoon*,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct vmballoon *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;

 VAR_7 = FUNC_0();


 if (!(VAR_5->capabilities & VAR_2) &&
     VAR_7 != (u32)VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_7, 0);

 return VAR_6 == VAR_4 ? 0 : -VAR_1;
}
