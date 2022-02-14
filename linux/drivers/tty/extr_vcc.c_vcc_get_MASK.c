
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {int excl_locked; scalar_t__ refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int) ;
 struct vcc_port** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct vcc_port *FUNC_3(unsigned long VAR_3, bool VAR_4)
{
 struct vcc_port *VAR_5;
 unsigned long VAR_6;

try_again:
 FUNC_0(&VAR_2, VAR_6);

 VAR_5 = VAR_1[VAR_3];
 if (!VAR_5) {
  FUNC_1(&VAR_2, VAR_6);
  return ((void*)0);
 }

 if (!VAR_4) {
  if (VAR_5->excl_locked) {
   FUNC_1(&VAR_2, VAR_6);
   FUNC_2(VAR_0);
   goto try_again;
  }
  VAR_5->refcnt++;
  FUNC_1(&VAR_2, VAR_6);
  return VAR_5;
 }

 if (VAR_5->refcnt) {
  FUNC_1(&VAR_2, VAR_6);




  FUNC_2(VAR_0/2);
  goto try_again;
 }

 VAR_5->refcnt++;
 VAR_5->excl_locked = 1;
 FUNC_1(&VAR_2, VAR_6);

 return VAR_5;
}
