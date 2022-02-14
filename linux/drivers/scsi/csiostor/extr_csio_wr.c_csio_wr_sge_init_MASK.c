
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {scalar_t__ fw_state; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*) ;

void
FUNC_4(struct csio_hw *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  if (VAR_2->fw_state != VAR_0)
   FUNC_1(VAR_2);

  if (VAR_2->flags & VAR_1)
   FUNC_2(VAR_2);
  else
   FUNC_3(VAR_2);
 } else
  FUNC_2(VAR_2);
}
