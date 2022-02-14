
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct mwifiex_private {int data_rate; int adapter; int is_data_rate_auto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int*,size_t,int ) ;
 int FUNC_2 (int*,int ,size_t) ;
 int FUNC_3 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_4, u8 *VAR_5,
        u32 VAR_6, u8 *VAR_7, u32 VAR_8)
{
 int VAR_9;
 u8 *VAR_10 = VAR_5, *VAR_11;
 u32 VAR_12, VAR_13;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_2);
 if (!VAR_11) {
  FUNC_3(VAR_4->adapter, VAR_1, "failed to alloc tmp buf\n");
  return -VAR_0;
 }

 FUNC_2(VAR_5, 0, VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_8 && VAR_7[VAR_12]; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_6 && VAR_11[VAR_13]; VAR_13++) {


   if ((VAR_7[VAR_12] & 0x7F) == (VAR_11[VAR_13] & 0x7F)) {
    *VAR_5++ = VAR_11[VAR_13];
    break;
   }
  }
 }

 FUNC_3(VAR_4->adapter, VAR_3, "info: Tx data rate set to %#x\n",
      VAR_4->data_rate);

 if (!VAR_4->is_data_rate_auto) {
  while (*VAR_10) {
   if ((*VAR_10 & 0x7f) == VAR_4->data_rate) {
    VAR_9 = 0;
    goto done;
   }
   VAR_10++;
  }
  FUNC_3(VAR_4->adapter, VAR_1,
       "previously set fixed data rate %#x\t"
       "is not compatible with the network\n",
       VAR_4->data_rate);

  VAR_9 = -1;
  goto done;
 }

 VAR_9 = 0;
done:
 FUNC_0(VAR_11);
 return VAR_9;
}
