
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int extra_destructor; struct karma_data* extra; } ;
struct karma_data {int in_storage; int recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct karma_data*) ;
 int FUNC_1 (int ,int ) ;
 struct karma_data* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct us_data*) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_4)
{
 int VAR_5 = 0;
 struct karma_data *VAR_6 = FUNC_2(sizeof(struct karma_data), VAR_0);

 if (!VAR_6)
  goto out;

 VAR_6->recv = FUNC_1(VAR_2, VAR_0);
 if (!VAR_6->recv) {
  FUNC_0(VAR_6);
  goto out;
 }

 VAR_4->extra = VAR_6;
 VAR_4->extra_destructor = VAR_3;
 VAR_5 = FUNC_3(VAR_1, VAR_4);
 VAR_6->in_storage = (VAR_5 == 0);
out:
 return VAR_5;
}
