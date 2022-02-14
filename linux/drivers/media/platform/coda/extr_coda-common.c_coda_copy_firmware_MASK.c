
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct TYPE_4__ {int* vaddr; } ;
struct coda_dev {TYPE_2__ codebuf; TYPE_1__* devtype; } ;
typedef int __le16 ;
struct TYPE_3__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,int*,size_t) ;

__attribute__((used)) static void FUNC_2(struct coda_dev *VAR_1, const u8 * const VAR_2,
          size_t VAR_3)
{
 u32 *VAR_4 = (u32 *)VAR_2;


 if (VAR_2[0] == 'M' && VAR_2[1] == 'X')
  VAR_4 += 4;




 if (FUNC_0((__le16 *)VAR_4) == 0xe40e) {
  u32 *VAR_5 = VAR_1->codebuf.vaddr;
  int VAR_6;


  if (VAR_1->devtype->product == VAR_0) {
   for (VAR_6 = 0; VAR_6 < (VAR_3 - 16) / 4; VAR_6++)
    VAR_5[VAR_6] = (VAR_4[VAR_6] << 16) | (VAR_4[VAR_6] >> 16);
  } else {
   for (VAR_6 = 0; VAR_6 < (VAR_3 - 16) / 4; VAR_6 += 2) {
    VAR_5[VAR_6] = (VAR_4[VAR_6 + 1] << 16) | (VAR_4[VAR_6 + 1] >> 16);
    VAR_5[VAR_6 + 1] = (VAR_4[VAR_6] << 16) | (VAR_4[VAR_6] >> 16);
   }
  }
 } else {

  FUNC_1(VAR_1->codebuf.vaddr, VAR_4, VAR_3);
 }
}
