
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct des_ctx {int dummy; } ;
typedef int ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct des_ctx*,unsigned char*,unsigned char const*) ;
 int FUNC_2 (struct des_ctx*,unsigned char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct des_ctx*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_5(unsigned char *VAR_4, const unsigned char *VAR_5, unsigned char *VAR_6)
{
 unsigned char VAR_7[8];
 struct des_ctx VAR_8;

 FUNC_4(VAR_6, VAR_7);

 if (VAR_3) {
  FUNC_0(VAR_2, "FIPS compliance enabled: DES not permitted\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_8, VAR_7, VAR_0);
 FUNC_1(&VAR_8, VAR_4, VAR_5);
 FUNC_3(&VAR_8, sizeof(VAR_8));

 return 0;
}
