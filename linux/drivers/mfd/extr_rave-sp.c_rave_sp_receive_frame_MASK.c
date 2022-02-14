
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u8 ;
struct rave_sp {TYPE_3__* variant; TYPE_1__* serdev; } ;
struct device {int dummy; } ;
typedef int crc_calculated ;
struct TYPE_6__ {TYPE_2__* checksum; } ;
struct TYPE_5__ {size_t length; int (* subroutine ) (unsigned char const*,size_t const,unsigned char*) ;} ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char const*,size_t const) ;
 int FUNC_2 (char*,int ,int,int,unsigned char const*,size_t,int) ;
 scalar_t__ FUNC_3 (unsigned char const) ;
 int FUNC_4 (struct rave_sp*,unsigned char const*,size_t) ;
 int FUNC_5 (struct rave_sp*,unsigned char const*,size_t) ;
 int FUNC_6 (unsigned char const*,size_t const,unsigned char*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct rave_sp *VAR_2,
      const unsigned char *VAR_3,
      size_t VAR_4)
{
 const size_t VAR_5 = VAR_2->variant->checksum->length;
 const size_t VAR_6 = VAR_4 - VAR_5;
 const u8 *VAR_7 = &VAR_3[VAR_6];
 struct device *VAR_8 = &VAR_2->serdev->dev;
 u8 VAR_9[VAR_1];

 if (FUNC_7(VAR_5 > sizeof(VAR_9))) {
  FUNC_0(VAR_8, "Checksum too long, dropping\n");
  return;
 }

 FUNC_2("rave-sp rx: ", VAR_0,
        16, 1, VAR_3, VAR_4, 0);

 if (FUNC_7(VAR_4 <= VAR_5)) {
  FUNC_0(VAR_8, "Dropping short frame\n");
  return;
 }

 VAR_2->variant->checksum->subroutine(VAR_3, VAR_6,
       VAR_9);

 if (FUNC_1(VAR_9, VAR_7, VAR_5)) {
  FUNC_0(VAR_8, "Dropping bad frame\n");
  return;
 }

 if (FUNC_3(VAR_3[0]))
  FUNC_4(VAR_2, VAR_3, VAR_4);
 else
  FUNC_5(VAR_2, VAR_3, VAR_4);
}
