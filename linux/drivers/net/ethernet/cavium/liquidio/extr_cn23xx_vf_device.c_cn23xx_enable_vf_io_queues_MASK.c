
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int iq64B; int iq; int oq; } ;
struct octeon_device {scalar_t__ num_iqs; scalar_t__ num_oqs; TYPE_1__ io_qmask; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,int ,scalar_t__) ;
 int FUNC_6 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct octeon_device *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_iqs; VAR_4++) {
  u64 VAR_5;


  if (VAR_3->io_qmask.iq64B & FUNC_0(VAR_4)) {
   VAR_5 = FUNC_4(
       VAR_3, FUNC_1(VAR_4));
   VAR_5 |= VAR_0;
   FUNC_6(
       VAR_3, FUNC_1(VAR_4), VAR_5);
  }


  if (VAR_3->io_qmask.iq & FUNC_0(VAR_4)) {
   VAR_5 = FUNC_4(
       VAR_3, FUNC_1(VAR_4));
   VAR_5 |= VAR_1;
   FUNC_6(
       VAR_3, FUNC_1(VAR_4), VAR_5);
  }
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->num_oqs; VAR_4++) {
  u32 VAR_6;


  if (VAR_3->io_qmask.oq & FUNC_0(VAR_4)) {
   VAR_6 = FUNC_3(
       VAR_3, FUNC_2(VAR_4));
   VAR_6 |= VAR_2;
   FUNC_5(
       VAR_3, FUNC_2(VAR_4), VAR_6);
  }
 }

 return 0;
}
