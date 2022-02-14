
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {int num_subauth; int * sub_auth; int * authority; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct cifs_sid *VAR_3, const struct cifs_sid *VAR_4)
{
 int VAR_5;

 VAR_3->revision = VAR_4->revision;
 VAR_3->num_subauth = FUNC_0(VAR_2, VAR_4->num_subauth, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  VAR_3->authority[VAR_5] = VAR_4->authority[VAR_5];
 for (VAR_5 = 0; VAR_5 < VAR_3->num_subauth; ++VAR_5)
  VAR_3->sub_auth[VAR_5] = VAR_4->sub_auth[VAR_5];
}
