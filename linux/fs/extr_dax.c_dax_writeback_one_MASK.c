
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {unsigned long xa_index; } ;
struct dax_device {int dummy; } ;
struct address_space {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct address_space*,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (void*) ;
 int FUNC_4 (struct dax_device*,int ,unsigned long) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct xa_state*,void*) ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (struct xa_state*,void*,int) ;
 void* FUNC_11 (struct xa_state*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 (struct xa_state*,void*) ;
 int FUNC_15 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (struct xa_state*,int ) ;
 int FUNC_19 (struct xa_state*,int ) ;
 int FUNC_20 (struct xa_state*) ;
 int FUNC_21 (struct xa_state*) ;
 int FUNC_22 (struct xa_state*,void*) ;
 int FUNC_23 (struct xa_state*) ;

__attribute__((used)) static int FUNC_24(struct xa_state *VAR_4, struct dax_device *VAR_5,
  struct address_space *VAR_6, void *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 long VAR_11 = 0;





 if (FUNC_0(!FUNC_17(VAR_7)))
  return -VAR_0;

 if (FUNC_16(FUNC_6(VAR_7))) {
  void *VAR_12 = VAR_7;

  VAR_7 = FUNC_11(VAR_4, 0);


  if (!VAR_7 || FUNC_1(!FUNC_17(VAR_7)))
   goto put_unlocked;





  if (FUNC_9(VAR_12) != FUNC_9(VAR_7))
   goto put_unlocked;
  if (FUNC_1(FUNC_5(VAR_7) ||
     FUNC_7(VAR_7))) {
   VAR_11 = -VAR_0;
   goto put_unlocked;
  }


  if (!FUNC_19(VAR_4, VAR_2))
   goto put_unlocked;
 }


 FUNC_8(VAR_4, VAR_7);
 FUNC_18(VAR_4, VAR_2);
 FUNC_23(VAR_4);
 VAR_8 = FUNC_9(VAR_7);
 VAR_10 = 1UL << FUNC_3(VAR_7);
 VAR_9 = VAR_4->xa_index & ~(VAR_10 - 1);

 FUNC_2(VAR_6, VAR_9, VAR_8);
 FUNC_4(VAR_5, FUNC_12(FUNC_13(VAR_8)), VAR_10 * VAR_3);






 FUNC_21(VAR_4);
 FUNC_20(VAR_4);
 FUNC_22(VAR_4, VAR_7);
 FUNC_18(VAR_4, VAR_1);
 FUNC_10(VAR_4, VAR_7, 0);

 FUNC_15(VAR_6->host, VAR_9, VAR_10);
 return VAR_11;

 put_unlocked:
 FUNC_14(VAR_4, VAR_7);
 return VAR_11;
}
