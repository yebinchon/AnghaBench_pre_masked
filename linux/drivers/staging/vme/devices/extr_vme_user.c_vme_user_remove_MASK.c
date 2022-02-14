
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vme_dev {int dummy; } ;
struct TYPE_2__ {int resource; int pci_buf; int kern_buf; int size_buf; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(struct vme_dev *VAR_10)
{
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_5(&VAR_7[VAR_11].mutex);
  FUNC_3(VAR_9, FUNC_0(VAR_6, VAR_11));
 }
 FUNC_2(VAR_9);

 for (VAR_11 = VAR_1; VAR_11 < (VAR_0 + 1); VAR_11++) {
  FUNC_4(VAR_7[VAR_11].kern_buf);
  FUNC_8(VAR_7[VAR_11].resource);
 }

 for (VAR_11 = VAR_3; VAR_11 < (VAR_2 + 1); VAR_11++) {
  FUNC_10(VAR_7[VAR_11].resource, 0, 0, 0, 0, VAR_4, 0);
  FUNC_7(VAR_7[VAR_11].resource, VAR_7[VAR_11].size_buf,
        VAR_7[VAR_11].kern_buf, VAR_7[VAR_11].pci_buf);
  FUNC_9(VAR_7[VAR_11].resource);
 }


 FUNC_1(VAR_8);


 FUNC_6(FUNC_0(VAR_6, 0), VAR_5);

 return 0;
}
