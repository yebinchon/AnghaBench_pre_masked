
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {int read_ptr; int write_ptr; } ;


 int FUNC_0 (struct iwl_txq const*,int) ;

__attribute__((used)) static inline bool FUNC_1(const struct iwl_txq *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);
 int VAR_3 = FUNC_0(VAR_0, VAR_0->read_ptr);
 int VAR_4 = FUNC_0(VAR_0, VAR_0->write_ptr);

 return VAR_4 >= VAR_3 ?
  (VAR_2 >= VAR_3 && VAR_2 < VAR_4) :
  !(VAR_2 < VAR_3 && VAR_2 >= VAR_4);
}
