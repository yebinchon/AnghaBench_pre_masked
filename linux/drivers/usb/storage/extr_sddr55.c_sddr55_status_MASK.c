
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; scalar_t__ extra; } ;
struct sddr55_card_info {unsigned char read_only; scalar_t__ force_read_only; scalar_t__ fatal_error; int * pba_to_lba; int * lba_to_pba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct us_data*,int ,unsigned char*,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct us_data*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_8)
{
 int VAR_9;
 unsigned char *VAR_10 = VAR_8->iobuf;
 unsigned char *VAR_11 = VAR_8->iobuf;
 struct sddr55_card_info *VAR_12 = (struct sddr55_card_info *)VAR_8->extra;


 FUNC_1(VAR_10, 0, 8);
 VAR_10[5] = 0xB0;
 VAR_10[7] = 0x80;
 VAR_9 = FUNC_2(VAR_8,
  VAR_1, VAR_10, 8);

 FUNC_4(VAR_8, "Result for send_command in status %d\n", VAR_9);

 if (VAR_9 != VAR_5) {
  FUNC_3 (4, 0, 0);
  return VAR_2;
 }

 VAR_9 = FUNC_2(VAR_8,
  VAR_0, VAR_11, 4);


 if (VAR_9 == VAR_6 || VAR_9 == VAR_7) {

  FUNC_0(VAR_12->lba_to_pba);
  FUNC_0(VAR_12->pba_to_lba);
  VAR_12->lba_to_pba = ((void*)0);
  VAR_12->pba_to_lba = ((void*)0);

  VAR_12->fatal_error = 0;
  VAR_12->force_read_only = 0;

  FUNC_3 (2, 0x3a, 0);
  return VAR_3;
 }

 if (VAR_9 != VAR_5) {
  FUNC_3 (4, 0, 0);
  return VAR_3;
 }


 VAR_12->read_only = (VAR_11[0] & 0x20);


 VAR_9 = FUNC_2(VAR_8,
  VAR_0, VAR_11, 2);

 if (VAR_9 != VAR_5) {
  FUNC_3 (4, 0, 0);
 }

 return (VAR_9 == VAR_5 ?
   VAR_4 : VAR_3);
}
