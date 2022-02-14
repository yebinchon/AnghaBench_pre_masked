
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct qcaspi {scalar_t__ burst_len; scalar_t__ legacy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qcaspi*,int) ;
 scalar_t__ FUNC_1 (struct qcaspi*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct qcaspi*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct qcaspi*,int ,scalar_t__,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct qcaspi *VAR_4, struct sk_buff *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = VAR_5->len;

 FUNC_3(VAR_4, VAR_2, VAR_9, VAR_3);
 if (VAR_4->legacy_mode)
  FUNC_0(VAR_4, VAR_1 | VAR_0);

 VAR_8 = 0;
 while (VAR_9) {
  VAR_6 = VAR_9;
  if (VAR_6 > VAR_4->burst_len)
   VAR_6 = VAR_4->burst_len;

  if (VAR_4->legacy_mode) {
   VAR_7 = FUNC_2(VAR_4,
            VAR_5->data + VAR_8,
            VAR_6);
  } else {
   VAR_7 = FUNC_1(VAR_4,
           VAR_5->data + VAR_8,
           VAR_6);
  }

  if (VAR_7 != VAR_6)
   return -1;

  VAR_8 += VAR_6;
  VAR_9 -= VAR_6;
 }

 return 0;
}
