
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* data; int len; int l2_len; int l4_len; int flag; int l3_len; int type; void* first; } ;
struct TYPE_3__ {int* data; int len; int type; void* first; } ;
union sub_crq {TYPE_2__ hdr; TYPE_1__ hdr_ext; } ;
typedef int u8 ;
typedef int u16 ;
typedef int hdr_desc ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (union sub_crq*,int ,int) ;

__attribute__((used)) static int FUNC_3(u8 VAR_3, u8 *VAR_4, int VAR_5, int *VAR_6,
       union sub_crq *VAR_7)
{
 union sub_crq VAR_8;
 int VAR_9 = VAR_5;
 int VAR_10 = 0;
 u8 *VAR_11, *VAR_12;
 int VAR_13;

 while (VAR_9 > 0) {
  VAR_12 = VAR_4 + VAR_5 - VAR_9;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  if (VAR_12 != VAR_4) {
   VAR_11 = VAR_8.hdr_ext.data;
   VAR_13 = VAR_9 > 29 ? 29 : VAR_9;
   VAR_8.hdr_ext.first = VAR_0;
   VAR_8.hdr_ext.type = VAR_2;
   VAR_8.hdr_ext.len = VAR_13;
  } else {
   VAR_11 = VAR_8.hdr.data;
   VAR_13 = VAR_9 > 24 ? 24 : VAR_9;
   VAR_8.hdr.first = VAR_0;
   VAR_8.hdr.type = VAR_1;
   VAR_8.hdr.len = VAR_13;
   VAR_8.hdr.l2_len = (u8)VAR_6[0];
   VAR_8.hdr.l3_len = FUNC_0((u16)VAR_6[1]);
   VAR_8.hdr.l4_len = (u8)VAR_6[2];
   VAR_8.hdr.flag = VAR_3 << 1;
  }
  FUNC_1(VAR_11, VAR_12, VAR_13);
  VAR_9 -= VAR_13;
  *VAR_7 = VAR_8;
  VAR_7++;
  VAR_10++;
 }

 return VAR_10;
}
