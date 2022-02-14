
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int open_flags; int map_id; } ;
typedef int u32 ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bpf_map* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bpf_map*) ;
 int FUNC_3 (struct bpf_map*) ;
 struct bpf_map* FUNC_4 (struct bpf_map*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bpf_map*,int) ;
 int FUNC_7 (struct bpf_map*) ;
 int FUNC_8 (int ) ;
 struct bpf_map* FUNC_9 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(const union bpf_attr *VAR_8)
{
 struct bpf_map *VAR_9;
 u32 VAR_10 = VAR_8->map_id;
 int VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_0) ||
     VAR_8->open_flags & ~VAR_1)
  return -VAR_3;

 if (!FUNC_8(VAR_2))
  return -VAR_5;

 VAR_11 = FUNC_5(VAR_8->open_flags);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_10(&VAR_7);
 VAR_9 = FUNC_9(&VAR_6, VAR_10);
 if (VAR_9)
  VAR_9 = FUNC_4(VAR_9, 1);
 else
  VAR_9 = FUNC_1(-VAR_4);
 FUNC_11(&VAR_7);

 if (FUNC_2(VAR_9))
  return FUNC_3(VAR_9);

 VAR_12 = FUNC_6(VAR_9, VAR_11);
 if (VAR_12 < 0)
  FUNC_7(VAR_9);

 return VAR_12;
}
