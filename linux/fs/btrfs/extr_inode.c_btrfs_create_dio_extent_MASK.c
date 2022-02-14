
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int const VAR_1 ;
 struct extent_map* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 int FUNC_3 (struct inode*,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,int const) ;
 int FUNC_4 (int ,scalar_t__ const,scalar_t__ const,int ) ;
 struct extent_map* FUNC_5 (struct inode*,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,int ,int const) ;
 int FUNC_6 (struct extent_map*) ;

__attribute__((used)) static struct extent_map *FUNC_7(struct inode *VAR_2,
        const u64 VAR_3,
        const u64 VAR_4,
        const u64 VAR_5,
        const u64 VAR_6,
        const u64 VAR_7,
        const u64 VAR_8,
        const u64 VAR_9,
        const int VAR_10)
{
 struct extent_map *VAR_11 = ((void*)0);
 int VAR_12;

 if (VAR_10 != VAR_1) {
  VAR_11 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8,
      VAR_9,
      VAR_0,
      VAR_10);
  if (FUNC_2(VAR_11))
   goto out;
 }
 VAR_12 = FUNC_3(VAR_2, VAR_3, VAR_6,
        VAR_4, VAR_7, VAR_10);
 if (VAR_12) {
  if (VAR_11) {
   FUNC_6(VAR_11);
   FUNC_4(FUNC_0(VAR_2), VAR_3,
      VAR_3 + VAR_4 - 1, 0);
  }
  VAR_11 = FUNC_1(VAR_12);
 }
 out:

 return VAR_11;
}
