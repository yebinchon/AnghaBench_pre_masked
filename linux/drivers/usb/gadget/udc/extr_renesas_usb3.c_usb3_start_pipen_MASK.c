
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int started; int num; scalar_t__ dir_in; scalar_t__ halt; } ;
struct renesas_usb3 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_3 (struct renesas_usb3*,int ) ;
 struct renesas_usb3* FUNC_4 (struct renesas_usb3_ep*) ;
 struct renesas_usb3_request* FUNC_5 (struct renesas_usb3_ep*) ;
 scalar_t__ FUNC_6 (struct renesas_usb3*,int ) ;
 int FUNC_7 (struct renesas_usb3*) ;
 int FUNC_8 (struct renesas_usb3*,int,int ) ;
 int FUNC_9 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;

__attribute__((used)) static void FUNC_10(struct renesas_usb3_ep *VAR_5,
        struct renesas_usb3_request *VAR_6)
{
 struct renesas_usb3 *VAR_7 = FUNC_4(VAR_5);
 struct renesas_usb3_request *VAR_8 = FUNC_5(VAR_5);
 unsigned long VAR_9;
 int VAR_10 = -VAR_0;
 u32 VAR_11 = 0;

 FUNC_0(&VAR_7->lock, VAR_9);
 if (VAR_5->halt || VAR_5->started)
  goto out;
 if (VAR_6 != VAR_8)
  goto out;

 if (FUNC_6(VAR_7, VAR_5->num) < 0)
  goto out;

 VAR_5->started = 1;

 if (FUNC_2(VAR_5, VAR_6))
  goto out;

 FUNC_7(VAR_7);

 if (VAR_5->dir_in) {
  VAR_10 = FUNC_9(VAR_5, VAR_6, VAR_4);
  VAR_11 |= VAR_2;
 }

 if (VAR_10 < 0)
  VAR_11 |= VAR_1;

 if (VAR_11) {
  FUNC_8(VAR_7, VAR_11, VAR_3);
  FUNC_3(VAR_7, VAR_5->num);
 }
out:
 FUNC_1(&VAR_7->lock, VAR_9);
}
