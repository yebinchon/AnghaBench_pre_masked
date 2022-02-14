
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct firmware {size_t size; int data; } ;
struct ath6kl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,size_t,int ) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct ath6kl *VAR_2, const char *VAR_3,
    u8 **VAR_4, size_t *VAR_5)
{
 const struct firmware *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_6, VAR_3, VAR_2->dev);
 if (VAR_7)
  return VAR_7;

 *VAR_5 = VAR_6->size;
 *VAR_4 = FUNC_0(VAR_6->data, VAR_6->size, VAR_1);

 if (*VAR_4 == ((void*)0))
  VAR_7 = -VAR_0;

 FUNC_1(VAR_6);

 return VAR_7;
}
