
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_comp {int dummy; } ;
struct TYPE_4__ {int bufsize; } ;
struct TYPE_3__ {int name; int (* zbufsize ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct crypto_comp*) ;
 int FUNC_2 (struct crypto_comp*) ;
 char* VAR_2 ;
 int VAR_3 ;
 struct crypto_comp* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_9 (int ) ;
 struct crypto_comp* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_10(void)
{
 struct crypto_comp *VAR_7;
 int VAR_8;
 char *VAR_9;


 if (!FUNC_0(VAR_0) || !VAR_6)
  return;


 if (!VAR_4 || VAR_5)
  return;

 if (!FUNC_4(VAR_6->name, 0, 0)) {
  FUNC_7("Unknown compression: %s\n", VAR_6->name);
  return;
 }

 VAR_8 = VAR_6->zbufsize(VAR_4->bufsize);
 if (VAR_8 <= 0) {
  FUNC_7("Invalid compression size for %s: %d\n",
         VAR_6->name, VAR_8);
  return;
 }

 VAR_9 = FUNC_6(VAR_8, VAR_1);
 if (!VAR_9) {
  FUNC_7("Failed %d byte compression buffer allocation for: %s\n",
         VAR_8, VAR_6->name);
  return;
 }

 VAR_7 = FUNC_3(VAR_6->name, 0, 0);
 if (FUNC_1(VAR_7)) {
  FUNC_5(VAR_9);
  FUNC_7("crypto_alloc_comp('%s') failed: %ld\n", VAR_6->name,
         FUNC_2(VAR_7));
  return;
 }


 VAR_5 = VAR_7;
 VAR_3 = VAR_8;
 VAR_2 = VAR_9;

 FUNC_8("Using crash dump compression: %s\n", VAR_6->name);
}
