
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fw_rss_ind_tbl_cmd {void* startidx; void* niqid; int iq0_to_iq2; void* retval_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int cmd ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fw_rss_ind_tbl_cmd) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct fw_rss_ind_tbl_cmd*,int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct adapter*,struct fw_rss_ind_tbl_cmd*,int,int *) ;

int FUNC_11(struct adapter *VAR_3, unsigned int VAR_4,
     int VAR_5, int VAR_6, const u16 *VAR_7, int VAR_8)
{
 const u16 *VAR_9 = VAR_7;
 const u16 *VAR_10 = VAR_7+VAR_8;
 struct fw_rss_ind_tbl_cmd VAR_11;




 FUNC_8(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.op_to_viid = FUNC_7(FUNC_0(VAR_2) |
         VAR_0 |
         VAR_1 |
         FUNC_5(VAR_4));
 VAR_11.retval_len16 = FUNC_7(FUNC_1(VAR_11));







 while (VAR_6 > 0) {
  __be32 *VAR_12 = &VAR_11.iq0_to_iq2;
  int VAR_13 = FUNC_9(VAR_6, 32);
  int VAR_14;





  VAR_11.niqid = FUNC_6(VAR_13);
  VAR_11.startidx = FUNC_6(VAR_5);




  VAR_5 += VAR_13;
  VAR_6 -= VAR_13;






  while (VAR_13 > 0) {






   u16 VAR_15[3];
   u16 *VAR_16 = VAR_15;
   int VAR_17 = FUNC_9(3, VAR_13);

   VAR_13 -= VAR_17;
   VAR_15[0] = VAR_15[1] = VAR_15[2] = 0;
   while (VAR_17) {
    VAR_17--;
    *VAR_16++ = *VAR_9++;
    if (VAR_9 >= VAR_10)
     VAR_9 = VAR_7;
   }
   *VAR_12++ = FUNC_7(FUNC_2(VAR_15[0]) |
         FUNC_3(VAR_15[1]) |
         FUNC_4(VAR_15[2]));
  }





  VAR_14 = FUNC_10(VAR_3, &VAR_11, sizeof(VAR_11), ((void*)0));
  if (VAR_14)
   return VAR_14;
 }
 return 0;
}
