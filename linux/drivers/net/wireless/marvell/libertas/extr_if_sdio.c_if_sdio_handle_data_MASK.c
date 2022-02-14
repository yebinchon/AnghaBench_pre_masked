
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct if_sdio_card {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct sk_buff* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int *,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct if_sdio_card *VAR_4,
  u8 *VAR_5, unsigned VAR_6)
{
 int VAR_7;
 struct sk_buff *VAR_8;

 if (VAR_6 > VAR_2) {
  FUNC_1("response packet too large (%d bytes)\n",
   (int)VAR_6);
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_0(VAR_2 + VAR_3);
 if (!VAR_8) {
  VAR_7 = -VAR_1;
  goto out;
 }

 FUNC_4(VAR_8, VAR_3);

 FUNC_3(VAR_8, VAR_5, VAR_6);

 FUNC_2(VAR_4->priv, VAR_8);

 VAR_7 = 0;

out:
 return VAR_7;
}
