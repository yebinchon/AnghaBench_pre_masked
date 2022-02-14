
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct TYPE_2__ {int rx_size; } ;
struct ar9170 {TYPE_1__ fw; int udev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ,int ,void*,int ,int ,struct ar9170*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct urb *FUNC_5(struct ar9170 *VAR_3, gfp_t VAR_4)
{
 struct urb *VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_1(VAR_3->fw.rx_size, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_2(0, VAR_4);
 if (!VAR_5) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_5, VAR_3->udev, FUNC_4(VAR_3->udev,
     VAR_0), VAR_6, VAR_3->fw.rx_size,
     VAR_2, VAR_3);

 VAR_5->transfer_flags |= VAR_1;

 return VAR_5;
}
