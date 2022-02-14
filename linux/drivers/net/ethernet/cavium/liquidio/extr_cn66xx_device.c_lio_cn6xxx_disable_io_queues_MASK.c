
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int iq; int oq; } ;
struct octeon_device {TYPE_1__ io_qmask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (struct octeon_device*) ;
 int FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;
 int FUNC_8 (int) ;

void FUNC_9(struct octeon_device *VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10 = VAR_6;
 u32 VAR_11;


 VAR_9 = FUNC_6(VAR_7, VAR_1);
 VAR_9 ^= VAR_7->io_qmask.iq;
 FUNC_7(VAR_7, VAR_1, VAR_9);


 VAR_9 = (u32)VAR_7->io_qmask.iq;
 VAR_11 = FUNC_6(VAR_7, VAR_4);
 while (((VAR_11 & VAR_9) != VAR_9) && VAR_10--) {
  VAR_11 = FUNC_6(VAR_7, VAR_4);
  FUNC_8(1);
 }


 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_7); VAR_8++) {
  if (!(VAR_7->io_qmask.iq & FUNC_0(VAR_8)))
   continue;
  FUNC_7(VAR_7, FUNC_1(VAR_8), 0xFFFFFFFF);
  VAR_11 = FUNC_6(VAR_7, FUNC_1(VAR_8));
 }


 VAR_9 = FUNC_6(VAR_7, VAR_2);
 VAR_9 ^= VAR_7->io_qmask.oq;
 FUNC_7(VAR_7, VAR_2, VAR_9);


 VAR_10 = VAR_6;
 VAR_9 = (u32)VAR_7->io_qmask.oq;
 VAR_11 = FUNC_6(VAR_7, VAR_5);
 while (((VAR_11 & VAR_9) != VAR_9) && VAR_10--) {
  VAR_11 = FUNC_6(VAR_7, VAR_5);
  FUNC_8(1);
 }
 ;


 for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_7); VAR_8++) {
  if (!(VAR_7->io_qmask.oq & FUNC_0(VAR_8)))
   continue;
  FUNC_7(VAR_7, FUNC_2(VAR_8), 0xFFFFFFFF);
  VAR_11 = FUNC_6(VAR_7, FUNC_2(VAR_8));

  VAR_11 = FUNC_6(VAR_7, FUNC_3(VAR_8));
  FUNC_7(VAR_7, FUNC_3(VAR_8), VAR_11);
 }

 VAR_11 = FUNC_6(VAR_7, VAR_0);
 if (VAR_11)
  FUNC_7(VAR_7, VAR_0, VAR_11);

 VAR_11 = FUNC_6(VAR_7, VAR_3);
 if (VAR_11)
  FUNC_7(VAR_7, VAR_3, VAR_11);
}
