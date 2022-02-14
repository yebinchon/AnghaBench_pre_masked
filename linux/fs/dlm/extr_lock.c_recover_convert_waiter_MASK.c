
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {TYPE_1__ m_header; int m_result; int m_type; int m_flags; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {scalar_t__ lkb_grmode; scalar_t__ lkb_rqmode; int lkb_flags; int lkb_resource; int lkb_nodeid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_message*,int ,int) ;
 scalar_t__ FUNC_3 (struct dlm_lkb*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dlm_lkb*) ;

__attribute__((used)) static void FUNC_6(struct dlm_ls *VAR_6, struct dlm_lkb *VAR_7,
       struct dlm_message *VAR_8)
{
 if (FUNC_3(VAR_7)) {
  FUNC_1(VAR_7);
  FUNC_2(VAR_8, 0, sizeof(struct dlm_message));
  VAR_8->m_flags = VAR_1;
  VAR_8->m_type = VAR_3;
  VAR_8->m_result = -VAR_4;
  VAR_8->m_header.h_nodeid = VAR_7->lkb_nodeid;
  FUNC_0(VAR_7, VAR_8);


  VAR_7->lkb_grmode = VAR_2;
  FUNC_4(VAR_7->lkb_resource, VAR_5);
  FUNC_5(VAR_7);

 } else if (VAR_7->lkb_rqmode >= VAR_7->lkb_grmode) {
  VAR_7->lkb_flags |= VAR_0;
 }



}
