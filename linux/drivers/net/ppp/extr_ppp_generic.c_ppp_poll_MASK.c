
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_file {scalar_t__ kind; scalar_t__ dead; int rq; int rwait; } ;
struct ppp {scalar_t__ n_channels; int flags; } ;
struct file {struct ppp_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ppp* FUNC_0 (struct ppp_file*) ;
 int VAR_6 ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct ppp*) ;
 int FUNC_3 (struct ppp*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_7, poll_table *VAR_8)
{
 struct ppp_file *VAR_9 = VAR_7->private_data;
 __poll_t VAR_10;

 if (!VAR_9)
  return 0;
 FUNC_1(VAR_7, &VAR_9->rwait, VAR_8);
 VAR_10 = VAR_2 | VAR_4;
 if (FUNC_4(&VAR_9->rq))
  VAR_10 |= VAR_1 | VAR_3;
 if (VAR_9->dead)
  VAR_10 |= VAR_0;
 else if (VAR_9->kind == VAR_5) {

  struct ppp *VAR_11 = FUNC_0(VAR_9);

  FUNC_2(VAR_11);
  if (VAR_11->n_channels == 0 &&
      (VAR_11->flags & VAR_6) == 0)
   VAR_10 |= VAR_1 | VAR_3;
  FUNC_3(VAR_11);
 }

 return VAR_10;
}
