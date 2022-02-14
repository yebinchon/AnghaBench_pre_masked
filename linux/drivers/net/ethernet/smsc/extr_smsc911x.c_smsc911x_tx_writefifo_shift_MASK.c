
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smsc911x_data {int dev_lock; TYPE_1__ config; scalar_t__ ioaddr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct smsc911x_data*,int ,int ) ;
 scalar_t__ FUNC_2 (struct smsc911x_data*,int ) ;
 int FUNC_3 (scalar_t__,unsigned int*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void
FUNC_7(struct smsc911x_data *VAR_4, unsigned int *VAR_5,
        unsigned int VAR_6)
{
 unsigned long VAR_7;

 FUNC_4(&VAR_4->dev_lock, VAR_7);

 if (VAR_4->config.flags & VAR_0) {
  while (VAR_6--)
   FUNC_1(VAR_4, VAR_3,
          FUNC_6(*VAR_5++));
  goto out;
 }

 if (VAR_4->config.flags & VAR_2) {
  FUNC_3(VAR_4->ioaddr + FUNC_2(VAR_4,
      VAR_3), VAR_5, VAR_6);
  goto out;
 }

 if (VAR_4->config.flags & VAR_1) {
  while (VAR_6--)
   FUNC_1(VAR_4,
       VAR_3, *VAR_5++);
  goto out;
 }

 FUNC_0();
out:
 FUNC_5(&VAR_4->dev_lock, VAR_7);
}
