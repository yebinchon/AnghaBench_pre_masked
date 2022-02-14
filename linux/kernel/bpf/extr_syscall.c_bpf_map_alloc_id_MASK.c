
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct bpf_map*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bpf_map *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_2);
 FUNC_4(&VAR_5);
 VAR_7 = FUNC_1(&VAR_4, VAR_6, 1, VAR_3, VAR_1);
 if (VAR_7 > 0)
  VAR_6->id = VAR_7;
 FUNC_5(&VAR_5);
 FUNC_3();

 if (FUNC_0(!VAR_7))
  return -VAR_0;

 return VAR_7 > 0 ? 0 : VAR_7;
}
