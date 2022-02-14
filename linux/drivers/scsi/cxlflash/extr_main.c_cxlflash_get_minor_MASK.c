
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,long) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3;
 long VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 >= VAR_0)
  return -1;

 VAR_3 = VAR_4 & VAR_1;
 FUNC_1(VAR_3, VAR_2);
 return VAR_3;
}
