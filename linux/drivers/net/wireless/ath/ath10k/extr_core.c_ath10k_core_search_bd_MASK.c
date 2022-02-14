
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath10k_fw_ie {int * data; int len; int id; } ;
struct ath10k {int dummy; } ;


 size_t FUNC_0 (size_t,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,int const*,size_t,char const*,int const) ;
 int FUNC_2 (struct ath10k*,char*,int,size_t,size_t) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_2,
     const char *VAR_3,
     const u8 *VAR_4,
     size_t VAR_5)
{
 size_t VAR_6;
 struct ath10k_fw_ie *VAR_7;
 int VAR_8 = -VAR_1, VAR_9;

 while (VAR_5 > sizeof(struct ath10k_fw_ie)) {
  VAR_7 = (struct ath10k_fw_ie *)VAR_4;
  VAR_9 = FUNC_3(VAR_7->id);
  VAR_6 = FUNC_3(VAR_7->len);

  VAR_5 -= sizeof(*VAR_7);
  VAR_4 = VAR_7->data;

  if (VAR_5 < FUNC_0(VAR_6, 4)) {
   FUNC_2(VAR_2, "invalid length for board ie_id %d ie_len %zu len %zu\n",
       VAR_9, VAR_6, VAR_5);
   return -VAR_0;
  }

  switch (VAR_9) {
  case 129:
   VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_6,
           VAR_3,
           129);
   if (VAR_8 == -VAR_1)

    break;


   goto out;
  case 128:
   VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_6,
           VAR_3,
           128);
   if (VAR_8 == -VAR_1)

    break;


   goto out;
  }


  VAR_6 = FUNC_0(VAR_6, 4);

  VAR_5 -= VAR_6;
  VAR_4 += VAR_6;
 }

out:

 return VAR_8;
}
