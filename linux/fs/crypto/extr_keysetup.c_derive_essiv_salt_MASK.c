
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct TYPE_4__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct crypto_shash*) ;
 struct crypto_shash* FUNC_4 (int *,int *,struct crypto_shash*) ;
 struct crypto_shash* FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct crypto_shash*) ;
 int FUNC_7 (TYPE_1__*,int const*,int,int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(const u8 *VAR_4, int VAR_5, u8 *VAR_6)
{
 struct crypto_shash *VAR_7 = FUNC_2(VAR_3);


 if (FUNC_10(!VAR_7)) {
  struct crypto_shash *VAR_8;

  VAR_7 = FUNC_5("sha256", 0, 0);
  if (FUNC_0(VAR_7)) {
   if (FUNC_1(VAR_7) == -VAR_0) {
    FUNC_9(((void*)0),
          "Missing crypto API support for SHA-256");
    return -VAR_1;
   }
   FUNC_8(((void*)0),
        "Error allocating SHA-256 transform: %ld",
        FUNC_1(VAR_7));
   return FUNC_1(VAR_7);
  }
  VAR_8 = FUNC_4(&VAR_3, ((void*)0), VAR_7);
  if (VAR_8) {
   FUNC_6(VAR_7);
   VAR_7 = VAR_8;
  }
 }

 {
  FUNC_3(VAR_2, VAR_7);
  VAR_2->tfm = VAR_7;

  return FUNC_7(VAR_2, VAR_4, VAR_5, VAR_6);
 }
}
