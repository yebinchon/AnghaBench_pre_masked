
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct send_ctx {scalar_t__ send_progress; int parent_root; int send_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_6, u64 VAR_7, u64 VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 u64 VAR_12;
 u64 VAR_13;

 VAR_9 = FUNC_0(VAR_6->send_root, VAR_7, ((void*)0), &VAR_12, ((void*)0), ((void*)0),
   ((void*)0), ((void*)0));
 if (VAR_9 < 0 && VAR_9 != -VAR_0)
  goto out;
 VAR_10 = VAR_9;

 if (!VAR_6->parent_root) {
  VAR_11 = -VAR_0;
 } else {
  VAR_9 = FUNC_0(VAR_6->parent_root, VAR_7, ((void*)0), &VAR_13,
    ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_9 < 0 && VAR_9 != -VAR_0)
   goto out;
  VAR_11 = VAR_9;
 }

 if (!VAR_10 && !VAR_11) {
  if (VAR_12 == VAR_8 && VAR_13 == VAR_8) {
   VAR_9 = VAR_3;
  } else if (VAR_12 == VAR_8) {
   if (VAR_7 < VAR_6->send_progress)
    VAR_9 = VAR_1;
   else
    VAR_9 = VAR_4;
  } else if (VAR_13 == VAR_8) {
   if (VAR_7 < VAR_6->send_progress)
    VAR_9 = VAR_2;
   else
    VAR_9 = VAR_5;
  } else {
   VAR_9 = -VAR_0;
  }
 } else if (!VAR_10) {
  if (VAR_12 == VAR_8) {
   if (VAR_7 < VAR_6->send_progress)
    VAR_9 = VAR_1;
   else
    VAR_9 = VAR_4;
  } else {
   VAR_9 = -VAR_0;
  }
 } else if (!VAR_11) {
  if (VAR_13 == VAR_8) {
   if (VAR_7 < VAR_6->send_progress)
    VAR_9 = VAR_2;
   else
    VAR_9 = VAR_5;
  } else {
   VAR_9 = -VAR_0;
  }
 } else {
  VAR_9 = -VAR_0;
 }

out:
 return VAR_9;
}
