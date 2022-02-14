
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,unsigned int,...) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_8)
{
 u64 VAR_9, VAR_10 = VAR_6;
 int VAR_11, VAR_12;


 VAR_9 = VAR_10 << VAR_4;

 VAR_9 |= FUNC_0(VAR_3);
 VAR_11 = FUNC_3(VAR_2, VAR_9);
 if (VAR_11) {
  FUNC_1("cpu %d OC mailbox write failed\n", VAR_8);
  return VAR_11;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
  VAR_11 = FUNC_2(VAR_2, &VAR_9);
  if (VAR_11) {
   FUNC_1("cpu %d OC mailbox read failed\n", VAR_8);
   break;
  }

  if (VAR_9 & FUNC_0(VAR_3)) {
   FUNC_1("cpu %d OC mailbox still processing\n", VAR_8);
   VAR_11 = -VAR_0;
   continue;
  }

  if ((VAR_9 >> VAR_5) & 0xff) {
   FUNC_1("cpu %d OC mailbox cmd failed\n", VAR_8);
   VAR_11 = -VAR_1;
   break;
  }

  VAR_11 = VAR_9 & 0xff;
  FUNC_1("cpu %d max_ratio %d\n", VAR_8, VAR_11);
  break;
 }

 return VAR_11;
}
