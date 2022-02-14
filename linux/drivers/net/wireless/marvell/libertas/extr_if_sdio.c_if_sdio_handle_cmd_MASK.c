
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lbs_private {scalar_t__ resp_idx; unsigned int* resp_len; int driver_lock; int * resp_buf; } ;
struct if_sdio_card {struct lbs_private* priv; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct lbs_private*,size_t) ;
 int FUNC_3 (int ,size_t*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct if_sdio_card *VAR_2,
  u8 *VAR_3, unsigned VAR_4)
{
 struct lbs_private *VAR_5 = VAR_2->priv;
 int VAR_6;
 unsigned long VAR_7;
 u8 VAR_8;

 if (VAR_4 > VAR_1) {
  FUNC_1("response packet too large (%d bytes)\n",
   (int)VAR_4);
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_4(&VAR_5->driver_lock, VAR_7);

 VAR_8 = (VAR_5->resp_idx == 0) ? 1 : 0;
 FUNC_0(VAR_5->resp_len[VAR_8]);
 VAR_5->resp_len[VAR_8] = VAR_4;
 FUNC_3(VAR_5->resp_buf[VAR_8], VAR_3, VAR_4);
 FUNC_2(VAR_5, VAR_8);

 FUNC_5(&VAR_5->driver_lock, VAR_7);

 VAR_6 = 0;

out:
 return VAR_6;
}
