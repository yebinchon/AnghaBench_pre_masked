
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_flush_request; int sc_flags; int sc_state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nilfs_sc_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sc_info *VAR_5)
{
 int VAR_6 = 0;

 FUNC_2(&VAR_5->sc_state_lock);
 VAR_6 = (VAR_5->sc_flush_request & VAR_0) ?
  VAR_3 : VAR_4;
 FUNC_3(&VAR_5->sc_state_lock);

 if (VAR_6) {
  FUNC_1(VAR_5, VAR_6);

  FUNC_2(&VAR_5->sc_state_lock);
  VAR_5->sc_flush_request &= (VAR_6 == VAR_4) ?
   ~VAR_1 : ~VAR_0;
  FUNC_3(&VAR_5->sc_state_lock);
 }
 FUNC_0(VAR_2, &VAR_5->sc_flags);
}
