
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int grefs_per_grant_frame; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_3 ;
 int FUNC_4 (char*,unsigned int,unsigned int,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_0(VAR_2 == ((void*)0));
 VAR_6 = VAR_3;
 VAR_7 = ((VAR_4 + VAR_2->grefs_per_grant_frame - 1) /
   VAR_2->grefs_per_grant_frame);
 if (VAR_6 + VAR_7 > FUNC_2()) {
  FUNC_4("xen/grant-table: max_grant_frames reached"
        " cur=%u extra=%u limit=%u"
        " gnttab_free_count=%u req_entries=%u\n",
        VAR_6, VAR_7, FUNC_2(),
        VAR_1, VAR_4);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_6, VAR_6 + VAR_7 - 1);
 if (VAR_5 == 0)
  VAR_5 = FUNC_3(VAR_7);

 return VAR_5;
}
