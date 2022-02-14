
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int max_write_size; } ;


 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char*,int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned char*,unsigned int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (struct ubifs_info const*,char*,unsigned int,unsigned int,char*) ;

__attribute__((used)) static int FUNC_7(const struct ubifs_info *VAR_0, const void *VAR_1,
   unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5 = FUNC_1(1, 2);
 unsigned char *VAR_6 = (void *)VAR_1;

 VAR_3 = FUNC_5() % VAR_2;

 VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_3 + 1, VAR_0->max_write_size));

 FUNC_6(VAR_0, "filled bytes %u-%u with %s", VAR_3, VAR_4 - 1,
     VAR_5 ? "0xFFs" : "random data");

 if (VAR_5)
  FUNC_2(VAR_6 + VAR_3, 0xFF, VAR_4 - VAR_3);
 else
  FUNC_4(VAR_6 + VAR_3, VAR_4 - VAR_3);

 return VAR_4;
}
