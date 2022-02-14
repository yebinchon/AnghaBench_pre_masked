
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct mcfqspi {int waitq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mcfqspi*) ;
 void* FUNC_1 (struct mcfqspi*) ;
 int FUNC_2 (struct mcfqspi*,scalar_t__) ;
 int FUNC_3 (struct mcfqspi*,int ) ;
 int FUNC_4 (struct mcfqspi*,int ) ;
 int FUNC_5 (struct mcfqspi*,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct mcfqspi *VAR_5, unsigned VAR_6,
       const u16 *VAR_7, u16 *VAR_8)
{
 unsigned VAR_9, VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_6(VAR_6, 16u);

 FUNC_2(VAR_5, VAR_0);
 for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
  FUNC_4(VAR_5, VAR_3);

 FUNC_2(VAR_5, VAR_2);
 if (VAR_7)
  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
   FUNC_4(VAR_5, *VAR_7++);
 else
  for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
   FUNC_4(VAR_5, 0);

 VAR_6 -= VAR_10;
 if (VAR_6) {
  u16 VAR_12 = 0xf08;
  FUNC_5(VAR_5, 0x700);
  FUNC_3(VAR_5, VAR_4);

  do {
   FUNC_7(VAR_5->waitq, !FUNC_0(VAR_5));
   FUNC_5(VAR_5, VAR_12);
   FUNC_3(VAR_5, VAR_4);
   if (VAR_8) {
    FUNC_2(VAR_5,
            VAR_1 + VAR_11);
    for (VAR_9 = 0; VAR_9 < 8; ++VAR_9)
     *VAR_8++ = FUNC_1(VAR_5);
   }
   VAR_10 = FUNC_6(VAR_6, 8u);
   if (VAR_7) {
    FUNC_2(VAR_5,
            VAR_2 + VAR_11);
    for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
     FUNC_4(VAR_5, *VAR_7++);
   }
   VAR_12 = (VAR_11 ? 0x808 : 0x000) + ((VAR_10 - 1) << 8);
   VAR_11 ^= 8;
   VAR_6 -= VAR_10;
  } while (VAR_6);
  FUNC_7(VAR_5->waitq, !FUNC_0(VAR_5));
  FUNC_5(VAR_5, VAR_12);
  FUNC_3(VAR_5, VAR_4);
  if (VAR_8) {
   FUNC_2(VAR_5, VAR_1 + VAR_11);
   for (VAR_9 = 0; VAR_9 < 8; ++VAR_9)
    *VAR_8++ = FUNC_1(VAR_5);
   VAR_11 ^= 8;
  }
 } else {
  FUNC_5(VAR_5, (VAR_10 - 1) << 8);
  FUNC_3(VAR_5, VAR_4);
 }
 FUNC_7(VAR_5->waitq, !FUNC_0(VAR_5));
 if (VAR_8) {
  FUNC_2(VAR_5, VAR_1 + VAR_11);
  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
   *VAR_8++ = FUNC_1(VAR_5);
 }
}
