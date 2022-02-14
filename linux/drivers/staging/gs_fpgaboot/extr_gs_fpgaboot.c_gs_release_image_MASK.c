
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgaimage {int fw_entry; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct fpgaimage *VAR_0)
{
 FUNC_1(VAR_0->fw_entry);
 FUNC_0("release fpgaimage\n");

 return 0;
}
