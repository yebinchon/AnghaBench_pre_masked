
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static inline int FUNC_3(int VAR_3)
{

 if (!FUNC_2(VAR_3, 2, VAR_0)) {
  FUNC_1("I/O address 0x%04x already in use\n", (int)VAR_3);
  return -VAR_1;
 }


 FUNC_0(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3);

 return 0;
}
