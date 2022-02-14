
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned int fw_size; int big_lock; scalar_t__ fw_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,scalar_t__,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,...) ;

int FUNC_4(struct pvr2_hdw *VAR_3,unsigned int VAR_4,
         char *VAR_5,unsigned int VAR_6)
{
 int VAR_7 = -VAR_0;
 FUNC_1(VAR_3->big_lock); do {
  if (!VAR_5) break;
  if (!VAR_6) break;

  if (!VAR_3->fw_buffer) {
   VAR_7 = -VAR_1;
   break;
  }

  if (VAR_4 >= VAR_3->fw_size) {
   FUNC_3(VAR_2,
       "Read firmware data offs=%d EOF",
       VAR_4);
   VAR_7 = 0;
   break;
  }

  if (VAR_4 + VAR_6 > VAR_3->fw_size) VAR_6 = VAR_3->fw_size - VAR_4;

  FUNC_2(VAR_5,VAR_3->fw_buffer+VAR_4,VAR_6);

  FUNC_3(VAR_2,
      "Read firmware data offs=%d cnt=%d",
      VAR_4,VAR_6);
  VAR_7 = VAR_6;
 } while (0); FUNC_0(VAR_3->big_lock);

 return VAR_7;
}
