
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct fei_attr {scalar_t__ retval; TYPE_1__ kp; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct fei_attr*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, u64 VAR_4)
{
 struct fei_attr *VAR_5 = VAR_3;
 unsigned long VAR_6 = (unsigned long)VAR_4;
 int VAR_7 = 0;

 FUNC_2(&VAR_2);





 if (!FUNC_1(VAR_5)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_5->kp.addr) {
  if (FUNC_0((unsigned long)VAR_5->kp.addr,
     VAR_4) != VAR_6)
   VAR_7 = -VAR_0;
 }
 if (!VAR_7)
  VAR_5->retval = VAR_4;
out:
 FUNC_3(&VAR_2);

 return VAR_7;
}
